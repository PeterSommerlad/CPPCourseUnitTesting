## Exercise: What to test for a queue?

Consider a queue data structure such as `std::queue`. From its simplified class template definition, what would be the test cases that you consider to write to check that the implementation behaves accordingly.

```C++
template<class T, class Container = std::deque<T>>
struct queue {
  using value_type      = Container::value_type;
  using reference       = Container::reference;
  using const_reference = Container::const_reference;
  using size_type       = Container::size_type;

  queue() = default;

  bool              empty() const     { return c.empty(); }
  size_type         size()  const     { return c.size(); }
  reference         front()           { return c.front(); }
  const_reference   front() const     { return c.front(); }
  reference         back()            { return c.back(); }
  const_reference   back() const      { return c.back(); }
  void push(const value_type& x)      { c.push_back(x); }
  void push(value_type&& x)           { c.push_back(std::move(x)); }
  void pop()                          { c.pop_front(); }

private:
  Container c;

};
```

Let us first assume that the Container is `std::deque` and not instantiated differently. However, your tests should be prepared for a specialization of `queue` to be tested that it behaves according to the intuitive specification, i.e., a default constructed queue is `empty()`, or after a `push()` of an element the queue is `not empty()`.

Also for simplicity, let us assume that the type `T` and thus `Container::value_type` is `int`.

What test cases would you write and how would you name them? You don't have to implement those, a good test name should expose what you test for.

Consider, if and when you'd need to check for boundary conditions.

Discuss if you had ideas for sufficient or too many tests!
