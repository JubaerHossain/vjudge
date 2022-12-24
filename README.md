Vincent Adultman and his three friends – Anthony Matureperson, Rene Grownindividual, and Pierre Grandhomme – want to ride a rollercoaster. However, only people who are at least hh inches can ride the rollercoaster.

Vincent's height is vv inches, Anthony's height is aa inches, Rene's height is rr inches, and Pierre's height is pp inches.

Vincent and his friends know that at most three of them can stand on top of each other to "form" a taller "person". The height of this "person" is the height of the three children combined.

Can they choose a set of three people among themselves so that the "person" those three people form can ride the rollercoaster?

Input
The input consists of five lines.

The first line contains a single integer vv.

The second line contains a single integer aa.

The third line contains a single integer rr.

The fourth line contains a single integer pp.

The fifth line contains a single integer hh.

Output
Output a single line containing a single string which is WAW if they can choose a set of three people among themselves so that the "person" formed by those three people can ride the rollercoaster, or AWW if they cannot.

Scoring
12 \le v, a, r, p, h \le 15012≤v,a,r,p,h≤150

Subtask 1 (50 points):

v = a = r = pv=a=r=p

Subtask 2 (50 points):

No additional constraints.

Sample 1
Inputcopy	Outputcopy
20
20
20
20
61
AWW
Sample 2
Inputcopy	Outputcopy
24
55
42
69
143
WAW
Note
In the first sample test case, Vincent's height is 2020 inches, Anthony's height is 2020 inches, Rene's height is 2020 inches, and Pierre's height is 2020 inches. Also, only people who are at least 6161 inches can ride the rollercoaster.

There is no way to choose a set of three people among themselves so that the "person" those three people form can ride the rollercoaster, so the answer is AWW.

In the second sample test case, Vincent's height is 2424 inches, Anthony's height is 5555 inches, Rene's height is 4242 inches, and Pierre's height is 6969 inches. Also, only people who are at least 143143 inches can ride the rollercoaster.

Vincent, Pierre, and Anthony can form a "person" with height 24 + 69 + 55 = 14824+69+55=148 inches and this "person" can ride the rollercoaster, so the answer is WAW.