🐢 Floyd's Cycle Detection Algorithm

Floyd's Cycle Detection Algorithm is a two-pointer technique used to detect whether a linked list contains a cycle.

Slow pointer moves 1 step at a time.
Fast pointer moves 2 steps at a time.
If a cycle exists, slow and fast will eventually meet.
If there is no cycle, fast will reach NULL.

Pattern:

Move → Compare → Move → Compare → ...

Time Complexity: O(n)
Space Complexity: O(1)

Also called: 🐢 Tortoise and Hare Algorithm


-----------------------------------------------------

Hour hand  = hour × 30 + minute × 0.5
Minute hand = minute × 6

angle = abs(hourHand - minuteHand)

------------------------------------------------------

Step 1: Minute hand

The minute hand moves:

6° per minute

because:

360 / 60 = 6°

So at 15 minutes:

15 × 6 = 90°

Step 2: Hour hand

The hour hand moves:

30° per hour

because:

360 / 12 = 30°



-----------------------------------------------------------------------
Think about the clock

The hour hand travels:

12 → 1

That's 30°.

But it takes 60 minutes to travel those 30°.

So in 1 minute, it moves:
30° \1 60 = 0.5° 


Therefore:

Hour hand moves 0.5° every minute.


---------------------------------------------------------------------------
class Solution {
public:
    int gcd(int a, int b) {

        while(b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }
};
