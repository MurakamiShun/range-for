#pragma once

class range {
public:
	class Counter {
	private:
		const unsigned count;
		unsigned i;
	public:
		Counter(unsigned start, unsigned end) :
			count(end),
			i(start)
		{
		}
		unsigned operator*() {
			return i;
		}
		void operator ++() {
			i++;
		}
		bool operator!=(Counter&) {
			return i < count;
		}
	} counter;
	range(unsigned start, unsigned end) :
		counter(start, end)
	{
	}
	Counter begin() const {
		return counter;
	}
	Counter end() const {
		return counter;
	}
};

class step {
	public:
	class Counter {
	private:
		const unsigned count;
		unsigned i;
	public:
		Counter(unsigned arg_count) :
			count(arg_count),
			i(0)
		{
		}
		unsigned operator*() {
			return i;
		}
		void operator ++() {
			i++;
		}
		bool operator!=(Counter&) {
			return i < count;
		}
	} counter;
	step(unsigned arg_count) :
		counter(arg_count)
	{
	}
	Counter begin() const {
		return counter;
	}
	Counter end() const {
		return counter;
	}
};