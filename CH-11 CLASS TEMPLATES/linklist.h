#ifndef LINKLIST_H
#define LINKLIST_H

template <class T>
class LinkedList;
template <class T>
// The linked-list entry.
class ListEntry
{
    T thisentry;
    ListEntry *nextentry;
    ListEntry *preventry;
    ListEntry(T &entry);
    friend class LinkedList<T>;
};

template <class T>
// Construct a linked-list entry.
ListEntry<T>::ListEntry(T &entry)
{
    thisentry = entry;
    nextentry = 0;
    preventry = 0;
}

template <class T>
// The linked list
class LinkedList
{
    // The list head.
    ListEntry<T> *firstentry;
    ListEntry<T> *lastentry;
    ListEntry<T> *iterator;
    void RemoveEntry(ListEntry<T> *lentry);
    void InsertEntry(T &entry, ListEntry<T> *lentry);

public:
    LinkedList();
    ~LinkedList();
    void AppendEntry(T &entry);
    void RemoveEntry(int pos = -1);
    void InsertEntry(T &entry, int pos = -1);
    T *FindEntry(int pos);
    T *CurrentEntry();
    T *FirstEntry();
    T *LastEntry();
    T *NextEntry();
    T *PrevEntry();
};

template <class T>
// Construct a linked list.
LinkedList<T>::LinkedList()
{
    iterator = 0;
    firstentry = 0;
    lastentry = 0;
}

template <class T>
// Destory a linked list
LinkedList<T>::~LinkedList()
{
    while (firstentry)
        RemoveEntry(firstentry);
}

template <class T>
// Append an entry to the linked list.
void LinkedList<T>::AppendEntry(T &entry)
{
    ListEntry<T> *newentry = new ListEntry<T>(entry);
    newentry->preventry = lastentry;
    if (lastentry)
        lastentry->nextentry = newentry;
    if (firstentry == 0)
        firstentry = newentry;
    lastentry = newentry;
}

template <class T>
// Remove an entry from the linked list.
void LinkedList<T>::RemoveEntry(ListEntry<T> *lentry)
{
    if (lentry == 0)
        return;
    if (lentry == iterator)
        iterator = lentry->preventry;

    // Repair any break made by this removal.
    if (lentry->nextentry)
        lentry->nextentry->preventry = lentry->preventry;
    if (lentry->preventry)
        lentry->preventry->nextentry = lentry->nextentry;

    // Maintain list head if this is last and/or first.
    if (lentry == lastentry)
        lastentry = lentry->preventry;
    if (lentry == firstentry)
        firstentry = lentry->nextentry;

    delete lentry;
}

template <class T>
// Insert an entry into the linked list.
void LinkedList<T>::InsertEntry(T &entry, ListEntry<T> *lentry)
{
    ListEntry<T> *newentry = new ListEntry<T>(entry);
    newentry->nextentry = lentry;

    if (lentry)
    {
        newentry->preventry = lentry->preventry;
        lentry->preventry = newentry;
    }

    if (newentry->preventry)
        newentry->preventry = lentry->preventry;
    lentry->preventry = newentry;
    if (lentry == firstentry)
        firstentry = newentry;
}

template <class T>
// Remove an entry from the linked list.
void LinkedList<T>::RemoveEntry(int pos)
{
    FindEntry(pos);
    RemoveEntry(iterator);
}

template <class T>
// Insert an array into the linked list.
void LinkedList<T>::InsertEntry(T &entry, int pos)
{
    FindEntry(pos);
    InsertEntry(entry, iterator);
}

template <class T>
// Return the current linked-list entry.
T *LinkedList<T>::CurrentEntry()
{
    return iterator ? &(iterator->thisentry) : 0;
}

template <class T>
// Return a specific linked-list entry.
T *LinkedList<T>::FindEntry(int pos)
{
    if (pos != -1)
    {
        iterator = firstentry;
        if (iterator)
        {
            while (pos--)
                iterator = iterator->nextentry;
        }
    }
    return CurrentEntry();
}

template <class T>
// Return the first entry in the linked list.
T *LinkedList<T>::FirstEntry()
{
    iterator = firstentry;
    return CurrentEntry();
}

template <class T>
// Return the last entry in the linked list.
T *LinkedList<T>::LastEntry()
{
    iterator = lastentry;
    return CurrentEntry();
}

template <class T>
// Return the next entry in the linked list.
T *LinkedList<T>::NextEntry()
{
    if (iterator == 0)
        iterator = firstentry;
    else
        iterator = iterator->nextentry;

    return CurrentEntry();
}

template <class T>
// Return the previus entry in the linked list.
T *LinkedList<T>::PrevEntry()
{
    if (iterator == 0)
        iterator = lastentry;
    else
        iterator = iterator->preventry;

    return CurrentEntry();
}
#endif