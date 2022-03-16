### Lem-in

Let’s pay close attention to its calculation unit: an anthill with rooms and tunnels. A room can be connected
to an infinite number of other rooms by as many tunnels as needed, but a tunnel can only connect two
rooms.

It would be nice to build one of our own, but since we’re not really into DIY, let’s make a high-tech version:
a “Hex’ calculation unit” simulator.

On the standard input, your program must receive the anthill description the following way: first, the number of ants, then the rooms and their position and finally the tunnels (defined by the rooms they connect).
Here is an example of input and the associated anthill

![image](https://user-images.githubusercontent.com/65818912/158608058-b94ebefb-7b92-47cd-8137-3ef3734d88c9.png)


The rooms’ coordinates will always be whole numbers. Please note that it is possible to insert comments
by using “#” and commands by using “##”.
##start indicates the next room is the anthill entrance, and ##end indicates the next room is the anthill
exit.

Any unknown commands will be ignored.
The objective of your program is to find the quickest way to make the ants cross over the anthill. To do so,
each single ant need to take the shortest route (and not necessarily the easiest), whithout walking on its
peers, and avoiding traffic jams.

At the beginning of the game, all of the ants are in the anthill entrance.
The goal is to lead them to the exit room, in a minimum amount of laps.
Each room could contain a single ant at a time (except ##start and ##end, which can contain as many as
needed).

With each lap, you can move each ant only once by following a tunnel (if the receiving room is clear).
You must show the result on the standard output, in this order: number_of_ants, rooms, tunnels and then
for each lap, a series of Pn-r where n is the number of the ant, and r the name of the room it gets into.


Example:


![image](https://user-images.githubusercontent.com/65818912/158608428-853aed98-0a58-40cc-8a4f-b4cc0c7003e8.png)


#### First Year Project - EPITECH.
##### Project of 4.

