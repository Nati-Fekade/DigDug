# Homework 05 - Dig Dug - remade-ish
---

This is a trial on the game *Dig-Dug* where I tried to implement it using Mode 0 on the GBA, sprites, and some tile modification.

## Game Setup

My game stage is made of dirt where *titular* digs through as it is moving. *If you look close enough, you can actually see its shovel moving.*

We have the main player aka ***titular*** where it has the abitity to dig through the dirt trying to avoid obstacles. We have three major obstacles in our game: 

* Pookas - orange *duck-like* objects that can attack titulars by colliding with it.
  * As you kill pookas, the player's score increases by 250.
* Fygars - green *dragon-like* objest that can use fire to attakc the player from distance.
  * As you kill fygars, the player's score increases by 500.
* Rocks - regular rock where if they hit the player or fygars or pookas and would damage them.
  * If you kill fygars or pookas with rock, then player's score increases by 1000.

Titulars can attack the pookas and fygars by shoving an airpump *(I call this shovel in my implementation)* to the enemy and the enemies would gradually blow-up.

I have also implemented a life tracker where *titular* only has 3 lives. Live decrement if *titular* is in contact with *pookas* or *fygars* fire.

**Winning Condition:** kill all fygars and pookas.
**Losing Condition:** get killed 3 times.

## How to Play?

* You will be prompted by each *state* and the buttons to press to go to another *state* on the screen. Ex:
    * On the **START** state, press *start* key to start game
    * On the **GAME** state, press *select* key to pause
    * On the **PAUSE** state, press *select* key to continue or *start* key to restart
    * On the **WIN** press *start* key to restart
    * On the **LOSE** press *start* key to restart
* Use the *UP*, *DOWN*, *LEFT*, and *RIGHT* key to move accordingly
* Press *A* key while ***MOVING*** to activate the air pump
