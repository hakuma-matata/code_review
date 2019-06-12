#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_

#include <queue>

template <typename T> 
class templatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
};

#endif // PRIORITYQUEUE_H_
