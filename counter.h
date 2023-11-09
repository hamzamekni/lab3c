/*
 * A very simple counter.
 * https://cylab.be/blog/271/unit-testing-c-code
 */

struct Counter;

/**
 * Instantiate a new counter.
 */
struct Counter *counter(void);

/**
 * Increment the value of the counter.
 */
void increment(struct Counter *);

/**
 * Get the current value of the counter.
 */
int value(struct Counter *);