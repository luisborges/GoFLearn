#include "stdafx.h"
////Boost 1
//template <class T>
//class singleton : private T
//{
//private:
//	singleton();
//	~singleton();
//
//public:
//	static T &instance();
//};
//
//
//template <class T>
//inline singleton<T>::singleton()
//{
//	/* no-op */
//}
//
//template <class T>
//inline singleton<T>::~singleton()
//{
//	/* no-op */
//}
//
//template <class T>
///*static*/ T &singleton<T>::instance()
//{
//	// function-local static to force this to work correctly at static
//	// initialization time.
//	static singleton<T> s_oT;
//	return(s_oT);
//}

//Boost 2

template<class T>
class singleton_wrapper : public T
{
public:
	singleton_wrapper()
	{

	};
	static bool m_is_destroyed;
	~singleton_wrapper(){
		m_is_destroyed = true;
	}
};

template<class T>
bool singleton_wrapper< T >::m_is_destroyed = false;

template <class T>
class singleton 
{
private:
	static T & instance;
	// include this to provoke instantiation at pre-execution time
	static void use(T const &) {}
public:
	static T & get_instance() {
		static singleton_wrapper< T > t;
		// refer to instance, causing it to be instantiated (and
		// initialized at startup on working compilers)
		assert(! singleton_wrapper< T >::m_is_destroyed);
		use(instance);
		return static_cast<T &>(t);
	}
};

template<class T>
T & singleton< T >::instance = singleton< T >::get_instance();
