#include <iostream>

template<class T, class Allocator>
class vector
{
	public:
    typedef T	                value_type;
    typedef Allocator	        allocator_type;
    typedef std::size_t	      size_type;
    typedef std::ptrdiff_t	  difference_type;
    typedef value_type&	      reference;
    typedef const value_type& const_reference;
    typename allocator_type::pointer pointer; //TODO: typename


    //constructor
    vector();
    explicit vector(const allocator_type& alloc);
    explicit vector(size_type count, const_reference value = T(), const allocator_type& alloc = allocator_type());
    explicit vector(size_type count);
    explicit vector(size_type count, const allocator_type& alloc = allocator_type());

    template<class InputIt>
    vector(InputIt first, InputIt last, const allocator_type& alloc = allocator_type());

    vector(const vector& other);
    vector(const vector& other, const allocator_type& alloc);

    //destructor
    ~vector();
    
    //member
		vector&   operator=(const vector& other);
		void	    assign(size_type count, const_reference value);
    allocator_type	get_allocator() const;

    //element access
    reference        at(size_type pos);
    const_reference  at(size_type pos) const;

    reference        operator[] (size_type pos);
};

