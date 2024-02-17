# Collectible Item Plugin

> Simple plugin to collect items.

## Setup

The only thing needed is the CPP_CollectibleItemManager who must be put in the scene.
All the subclasses of CPP_CollectibleItem can be put in scene as well.

## CPP_CollectibleItemManager

CPP_CollectibleItemManager have some functions for get score info and set new points:

### void AddPoints(int Points)

> Simple function for adding points.

### int GetCurrentScore()

> Simple function who return the current score.

### void ResetCurrentScore()

> Simple function who reset the current score.