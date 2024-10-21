#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#include<deque>

namespace controllers {

  struct Pack;

	class Controller
	{
	public:
		Controller();
		~Controller();

		virtual std::deque<unsigned int> getAll() const;
		virtual std::deque<unsigned int> getEligible() const;
		virtual std::deque<unsigned int> getEligibleRun() const;
		virtual std::deque<unsigned int> getFirstTime() const;
		bool needsAction(unsigned int pos) const;

    Pack* findPackNeedsAction(unsigned int pos) const;
    
	};
}

#endif 