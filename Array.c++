#include <iostream>
using namespace std;
int main(){
    Class animal {
        public:
        void eat(){
            cout<<"Animal eating";
        };
        Class dog: public: animal{
            public:
            void bark(){
                cout<<""
            }
        }
    }