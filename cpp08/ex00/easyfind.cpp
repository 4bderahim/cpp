// template <class T>
// class MutantStack : public std::stack <T>
// {

//     public :
//         MutantStack(){};
//         MutantStack(MutantStack const &src):std::stack<T>(src){};
//         ~MutantStack(){};
//         MutantStack &operator=(MutantStack const &src){
//             if (&src != this)
//                 std::stack<T>::operator=(src);
//             return (*this);
//         };
//         typedef typename std::deque<T>::iterator iterator;
//         iterator begin(){return this->c.begin();};
//         iterator end(){return this->c.end();};
// };