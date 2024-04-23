/****************************************
  class state_priority_queue for searching the state space.
  ****************************************/

state_priority_queue::state_priority_queue(unsigned long mas)
        :state_queue(mas) {
    num_elts = 0;
};

state_priority_queue::~state_priority_queue() {
    priority_queue < state * , vector < state * >, cmp > empty_pq;
    swap(empty_pq, queue);
}

bool state_priority_queue::isempty() {
    return num_elts == 0;
}

void state_priority_queue::Print(void) {
    // can't print states except top element
    queue.top()->print();
}

void state_priority_queue::newHeap(vector<state *> &vec) {
    // TODO: a more efficient method to make a heap from a vector?
    priority_queue < state * , vector < state * >, cmp > stateHeap_new;
    queue = stateHeap_new;
    num_elts = 0;
    for (auto &e: vec) {
        queue.push(e);
        num_elts++;
    }
}