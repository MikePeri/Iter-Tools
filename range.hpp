#pragma once
#include <iostream>
using namespace std;
namespace itertools{
    class range{
    private:
        int _begin;
        int _end;
    public:
        range(int b, int e)
        {
            //cout<<"Range Constructor"<<endl;
            _begin=b;
            _end=e;
        }//Constructor
        ~range()
        {
            //cout<<"Range Destructor"<<endl;
        }//Destructor

        class iterator {
            private:
                int current_value;
            public:
                iterator(int value = 0):current_value(value)
                {
                     //cout<<"Range::Iterator Constructor"<<endl;
                }//constructor

                int& operator*() {
			        return current_value;
		        }//operator*()

                int* operator->() {
                    return &(current_value);
                }//operator->()
                
                iterator& operator++() 
                {   
                   current_value++;
                   return *this;
                }//operator

                bool operator==(const iterator& value)
                {
                    return current_value==value.current_value;
                }//operator==()

                bool operator!=(const iterator& value)
                {
                    return current_value!=value.current_value;
                }//operator==()

        };//END ITERATOR CLASS

        iterator begin() 
        {
		    return iterator{_begin};
	    }//begin
	
	    iterator end() 
        {
		    return iterator{_end};
	    }//end

        typedef int	value_type;
    };//END RANGE CLASS
    
};//END ITERATOOLS NAMESPACE