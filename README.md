# road-to-swerc
Repository to hold personal competitive programming exercise solutions from places like SPOJ and UVa.

## Dynamic Programming
* [**ACODE**](http://www.spoj.com/problems/ACODE/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/tree/master/spoj/june-2018/ACODE.cpp))  
Stored on a map the number of possible decodings for 1 digit, 2 digits, ... n, with n being the number's length. This array's n index is what you're looking for. Plenty of corner cases here, but invalid codes needn't to be handled.

* [**BYTESM2**](http://www.spoj.com/problems/BYTESM2/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/tree/master/spoj/july-2018/BYTESM2.cpp))  
Pretty straightforward bottom-up approach. On each level's tile, update its stone count by computing the best valid tile prior (just above it or diagonally to the left or right). On the bottom level, you'll be left with the best paths, just pick the max.

* [**COINS**](http://www.spoj.com/problems/COINS/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/tree/master/spoj/june-2018/COINS.cpp))  
A coin might be exchanged for 3 new coins, but so can these new coins. Used memoization to store (on a map container) the maximum possible value for a starting coin n.

* [**DBALLZ**](https://www.spoj.com/problems/DBALLZ/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/blob/master/spoj/june-2018/DBALLZ.cpp))  
A simple unbounded knapsack problem, since it allows item repetition. The distraction times are weights and the time spans are the values. *Beware, as SPOJ toolkit yields incorrect results.*

* [**PARTY**](http://www.spoj.com/problems/PARTY/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/tree/master/spoj/june-2018/PARTY.cpp))  
A simple 0/1 knapsack problem where the parties' fees are weights and their fun are the values.

## Binary Search
* [**AGGRCOW**](https://www.spoj.com/problems/AGGRCOW/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/blob/master/spoj/june-2018/AGGRCOW.cpp))  
*Can cows be spread in such a fashion that the distance between each cow is at least x?*  
If we cannot ensure cows are separated by at least x stalls, we cannot ensure separation by y stalls (y>x).

## Ad-hoc
* [**CANDY**](https://www.spoj.com/problems/CANDY/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/blob/master/spoj/june-2018/CANDY.cpp))  
For each bag which is below average, add a movement because a candy must be moved from a bigger bag.

* [**HANGOVER**](https://www.spoj.com/problems/HANGOVER/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/blob/master/spoj/june-2018/HANGOVER.cpp))  
Keep adding cards from top to bottom until the overhang exceeds the input.

* [**TRICOUNT**](https://www.spoj.com/problems/TRICOUNT/) ([Solution](https://github.com/aquelemiguel/road-to-swerc/blob/master/spoj/june-2018/TRICOUNT.cpp))  
There's a cool [formula](http://www.billthelizard.com/2009/08/how-many-triangles.html) that perfectly counts the no. of triangles inside of triangles.


