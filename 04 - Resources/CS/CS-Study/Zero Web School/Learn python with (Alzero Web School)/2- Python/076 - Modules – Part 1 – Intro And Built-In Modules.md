---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=z7g9gCYYLiU&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=76
Author: "[[Alzero Wep School]]"
topic: "[[076 - Modules – Part 1 – Intro And Built-In Modules]]"
---
> [!summary]-
> 

# <font color="#646a73">076 - Modules – Part 1 – Intro And Built-In Modules</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ---------------------------------
# -- Modules => Built In Modules --
# ---------------------------------
# [1] Module is A File Contain A Set Of Functions
# [2] You Can Import Module in Your App To Help You
# [3] You Can Import Multiple Modules
# [4] You Can Create Your Own Modules
# [5] Modules Saves Your Time
# --------------------------------------------------

# Import Main Module
import random
print(random)
print(f"Print Random Float Number {random.random()}")

# Show All Functions Inside Module
print(dir(random))

# Import One Or Two Functions From Module
from random import randint, random
print(f"Print Random Float {random()}")
print(f"Print Random Integer {randint(100, 900)}")
```
Output:
```
er/MedDir/file.py
<module 'random' from 'C:\\Users\\ad\\AppData\\Local\\Programs\\Python\\Python313\\Lib\\random.py'>
Print Random Float Number 0.5388308459309322
['BPF', 'LOG4', 'NV_MAGICCONST', 'RECIP_BPF', 'Random', 'SG_MAGICCONST', 'SystemRandom', 'TWOPI', '_ONE', '_Sequence', '__all__', '__builtins__', '__cached__', '__doc__', '__file__', '__loader__', '__name__', '__package__', '__spec__', '_accumulate', '_acos', '_bisect', '_ceil', 
'_cos', '_e', '_exp', '_fabs', '_floor', '_index', '_inst', '_isfinite', '_lgamma', '_log', '_log2', '_os', '_parse_args', '_pi', '_random', '_repeat', '_sha512', '_sin', '_sqrt', '_test', '_test_generator', '_urandom', 'betavariate', 'binomialvariate', 'choice', 'choices', 'expovariate', 'gammavariate', 'gauss', 'getrandbits', 'getstate', 'lognormvariate', 'main', 'normalvariate', 'paretovariate', 'randbytes', 'randint', 'random', 'randrange', 'sample', 'seed', 'setstate', 'shuffle', 'triangular', 'uniform', 'vonmisesvariate', 'weibullvariate']
Print Random Float 0.5990627033567113
Print Random Integer 308
```