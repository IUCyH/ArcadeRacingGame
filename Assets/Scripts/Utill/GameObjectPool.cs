using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameObjectPool<T> where T : class
{
    public delegate T FuncDel();
    Queue<T> m_queue = new Queue<T>();
    FuncDel m_funcDel;
    int m_count;
    public GameObjectPool(int count, FuncDel funcDel)
    {
        m_count = count;
        m_funcDel = funcDel;
        Allocate(m_count);
    }
    void Allocate(int count)
    {
        for(int i = 0; i < count; i++)
        {
            m_queue.Enqueue(m_funcDel());
        }
    }
    public T Get()
    {
        if (m_queue.Count < 1)
            return m_funcDel();
        return m_queue.Dequeue();
    }
    public void Set(T obj)
    {
        m_queue.Enqueue(obj);
    }
}
