#pragma once

class range {
public:
	class Counter {
	private:
		int end;
		int i;
	public:
		Counter(int start, int arg_end) noexcept :
			end(arg_end),
			i(start)
		{
		}
		int operator*() noexcept {
			return i;
		}
		void operator ++() noexcept {
			i++;
		}
		bool operator!=(const Counter& c) const noexcept {
			return i < c.end;
		}
	} counter;
	range(unsigned start, unsigned end) noexcept :
		counter(start, end)
	{
	}
	Counter& begin() noexcept {
		return counter;
	}
	Counter& end() noexcept {
		return counter;
	}
};

class step {
private:
	range::Counter counter;
public:
	step(int arg_count) noexcept:
		counter(0, arg_count)
	{
	}
	range::Counter& begin() noexcept {
		return counter;
	}
	range::Counter& end() noexcept {
		return counter;
	}
};