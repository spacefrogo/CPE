### Dante's Star

Subject:

Dante must journey through Hell, a thoroughly maze-like place. Here we’re going to generate mazes, find
the exit path and try to do this as fast as possible.
The project is divided into nine sections, which represent the nine circles of Hell that Dante must pass
through in order to reach purgatory.
The goal of this project is to generate mazes (in a reasonable amount of time), solve them (in a reasonable
amount of time), and print the solution.

These ambivalent and cowardly spirits, who do not suffer but yearn for happiness without being able to
obtain it, are ceaselessly tormented by the horseflies and wasps that goad them in vain. Here we can find:
Homer, Horace, Lucian, Lucretius, Ovid, Pluto, Seneca, Socrates, Saladin and all of those who have never
come to the Hub.

You must have 2 folders : solver with a binary named “solver” in it, generator with binary named “generator”
in it.
Each folder must contain a Makefile compiling the binary and a Makefile at the root must compile all binaries.

Usage:

• solver generator Makefile

• ./ solver :
solver

• ./ generator :
generator
[...]

Each solver must be able to function as follows:

• ./solver maze.txt
  - and print the solved maze on the standard output.
  If there is no solution you must print “no solution found” on the same output.


• The generator must function as follows:
  - ./generator x y [perfect]


Here is the maze format description:

• Mazes are rectangular.

• They are coded in ASCII.

• The ‘X’s represent the walls and the’*’s represent the free spaces.

• It is possible to move to the four surrounding squares (up, down, right, left).

• “Start” is in the upper left-hand corner (0;0)

• “Finish” is in the bottom right-hand corner.

• A solution is a series of free, adjacent squares, from “Start” to “Finish” included.

• “Start” and “Finish” can be occupied. In this case, there is no solution.

• The last line of the maze doesn’t terminate with a return line.

• Resolution: in order to write the solution in the maze, we use ‘o’ for the solution path.


Example:

![image](https://user-images.githubusercontent.com/65818912/158604035-bada15f3-14e7-480a-90fd-fe026f7bc55c.png)


#### First Year Project - EPITECH.
##### Duo Project.
