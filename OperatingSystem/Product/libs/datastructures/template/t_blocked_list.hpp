//
// Created by Sunist Chan on 2021/5/17.
//

#ifndef SUNISTOS_T_BLOCKED_LIST_HPP
#define SUNISTOS_T_BLOCKED_LIST_HPP

namespace osl_p {
    template<class t>
    class t_blocker_list_node {
    private:
        t* data_list;
        unsigned long size;

        t_blocker_list_node<t>* prev_node;
        t_blocker_list_node<t>* next_node;

    public:
        t_blocker_list_node<t>(unsigned long size, t_blocker_list_node<t>* prev_node = nullptr, t_blocker_list_node<t>* next_node = nullptr) {
            this->size = size;
            data_list = new t[size];

            this->prev_node = prev_node;
            this->next_node = next_node;
        }

        void add_back(t_blocker_list_node<t>* node) {
            if (node->next_node != nullptr) {
                node->next_node->prev_node = this;
                this->next_node = node->next_node;
                node->next_node = this;
                this->prev_node = node;
            }
            else {
                this->next_node = nullptr;
                node->next_node = this;
                this->prev_node = node;
            }
        }

        void add_front(t_blocker_list_node<t>* node) {
            if (node->prev_node != nullptr) {
                node->prev_node->next_node = this;
                this->prev_node = node->prev_node;
                node->prev_node = this;
                this->next_node = node;
            }
            else {
                this->prev_node = nullptr;
                node->prev_node = this;
                this->next_node = node;
            }
        }

        void operator<<(t_blocker_list_node<t>& node) {
            if (node.next_node != nullptr) {
                node.next_node->prev_node = this;
                this->next_node = node.next_node;
                node.next_node = this;
                this->prev_node = &node;
            }
            else {
                this->next_node = nullptr;
                node.next_node = this;
                this->prev_node = &node;
            }
        }

        void operator>>(t_blocker_list_node<t>& node) {
            if (node.prev_node != nullptr) {
                node.prev_node->next_node = this;
                this->prev_node = node.prev_node;
                node.prev_node = this;
                this->next_node = &node;
            }
            else {
                this->prev_node = nullptr;
                node.prev_node = this;
                this->next_node = &node;
            }
        }

        t& operator[](unsigned long index) {
            return data_list[index];
        }
    };
}

namespace osl {
    template<class t>
    class t_blocked_list {
    private:

    };

}

#endif //SUNISTOS_T_BLOCKED_LIST_HPP
