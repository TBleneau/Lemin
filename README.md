# Lemin
Ant-basedcalculationunit

The goal is to program an algorithm that can allow the ants to move between rooms and tunnels,
at the end they have to end in the last room.  

There has to be just one ant per tunnel and one ant per room, except the first one and the last one.

./lem_in < file
----------------

On the standard input, your program must receive the anthill description the following way :  

	• the number of ants,
	• the rooms and their position
	• the tunnels (defined by the rooms they connect)  

The rooms coordinates will always be whole numbers.
Please note that it is possible to insert comments by using “#” and commands by using “##”.  

	• ##start indicates the next room is the anthill entrance
	• ##end indicates the next room is the anthill exit

The standard output display the number of the ant that move and the room where she moves.  

In this order : number_of_ants, rooms, tunnels, for each lap, a series of Pn-r where
n is the number of the ant, and r the name of the room it gets into.

Bonus : ./lem_in < file | ./bonus/visu_hex
-------------------------------------------

To compile the bonus binary, you must first install the CSFML Library.
Enjoy it !