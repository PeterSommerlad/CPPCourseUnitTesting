#ifndef IDIE_H_
#define IDIE_H_
struct IDie {
  virtual int roll() = 0;
  virtual ~IDie() = default;
  IDie& operator=(IDie&&) & = delete;
};
#endif /* IDIE_H_ */
