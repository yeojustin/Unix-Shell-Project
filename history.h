#ifndef HISTORY_H
#define HISTORY_H

// History buffer size
#define HISTORY_SIZE 10

extern char *history[HISTORY_SIZE];
extern int history_count;

// Adds a command to the history.
void add_to_history(const char *cmd);

// Displays the command history.
void display_history();

#endif // HISTORY_H
