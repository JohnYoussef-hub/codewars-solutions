//Clock shows h hours, m minutes and s seconds after midnight.
//
//Your task is to write a function which returns the time since midnight in milliseconds.
//
//Example:
//h = 0
//m = 1
//s = 1
//
//result = 61000



int past(int h, int m, int s) {
	return (s * 1000 + m * 60000 + h * 3600000);
}