
/****************************************
  The state priority queue, used in heuristic search algorithm.
 ****************************************/
#include<queue>

// priority queue ordered by h value
struct cmp {
    bool operator()(state *a, state *b) {
        return a->h > b->h;  // note: > instead of <, so that smaller h is on top
    }
};

class state_priority_queue:public state_queue {  // for dynamic binding of queue
protected:
    priority_queue<state *, vector < state * >, cmp> queue;

public:
    // initializers
    state_priority_queue(unsigned long mas);

    // destructor
    ~ state_priority_queue();

//    void enqueue(state *e);
//
//    state *dequeue(void);
//
//    state *top(void);

    void enqueue(state *e) override {
        if (num_elts < max_active_states) {
            queue.push(e);
            num_elts++;
        } else {
            Error.Notrace("Internal Error: Too many active states.");    // To kill the search process by exit(1)
        }
    }

    state * dequeue(void) override {
        state *retval;
        if (num_elts > 0) {
            retval = queue.top();
            queue.pop();
            num_elts--;
        } else {
            Error.Notrace("Internal: Attempt to dequeue from empty state queue.", "", "");
        }
        return retval;
    }

    state *top(void) override {
        if (num_elts > 0) {
            return queue.top();
        } else {
            Error.Notrace("Internal: Attempt to top() empty state queue.", "", "");
            return NULL;
        }
    }

    bool isempty();

    void newHeap(vector<state *> &v);

    void Print(void);  // printing routine


    virtual unsigned NextRuleToTry()    // Uli: unsigned short -> unsigned
    {
        Error.Notrace
                ("Internal: Getting next rule to try from a state queue instead of a state stack.");
        return 0;
    }

    virtual void NextRuleToTry(unsigned r) {
        Error.Notrace
                ("Internal: Setting next rule to try from a state queue instead of a state stack.");
    }

    virtual void print_capacity(void) {
        cout << "\t* Capacity in queue for breadth-first search: "
             << max_active_states << " states.\n"
             <<
             "\t   * Change the constant gPercentActiveStates in mu_prolog.inc\n"
             << "\t     to increase this, if necessary.\n";
    }
};

