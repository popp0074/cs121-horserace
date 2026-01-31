# cs121-horserace


## function protos

void advance(int horseNum, int* horse);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

constant int NUM_HORSES
constant int TRACK_LENGTH
*a
## main

```
    set up randomization
    set up horses array
    5 zeros

    set keepGoing to true
    while loop to manage entrie game
    while keepGoing:
        go through all the horses (for loop)
        for each horse:
            advance that horse
            print a lane for that horse
            if that horse wins:
                set keepGoing to false (get out of game)
            prompt for next turn
```

## advance()
```
    gien horseNum and horse array
    roll a zero or one -> coin
    add coin to that horse's position value
```

## printLane()
```
    given horseNum and horse array
    for loop from 0 to TRACK_LENGTH -> i
        if i == current horse position:
            print norseNum
        otherwise:
            print a dot
```

## isWinner
```
    given horseNum and horse array  
    results = false
    if this horse's position += TRACK_LENGTH:
        result = true
        print horseNum is the winner
    return result
```

