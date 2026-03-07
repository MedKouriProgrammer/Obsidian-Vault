---
creation_date: 2025-10-30T14:28
tags:
  - Resources/Articles
Resource: https://www.youtube.com/watch?v=bgV0RHfRhB4&list=PLDoPjvoNmBAyE_gei5d18qkfIe-Z8mocs&index=74
Author: "[[Alzero Wep School]]"
topic: "[](074%20-%20Built%20In%20Functions%20Part%206%20–%20Reduce.md)"
---
> [!summary]-
> 

# <font color="#646a73">074 - Built In Functions Part 6 – Reduce</font>
---
## <font color="#ffc000">Explanation and method of use:</font>
#### Input:
```python
# ----------------------------------
# -- Built In Functions => Reduce --
# ----------------------------------
# [1] Reduce Take A Function + Iterator
# [2] Reduce Run A Function On FIrst and Second Element And Give Result
# [3] Then Run Function On Result And Third Element
# [4] Then Run Function On Rsult And Fourth Element And So On
# [5] Till One ELement is Left And This is The Result of The Reduce
# [6] The Function Can Be Pre-Defined Function or Lambda Function
# ---------------------------------------------------------------

from functools import reduce

def sumAll(num1, num2):

  return num1 + num2

numbers = [1, 8, 2, 9, 100]

result = reduce(sumAll, numbers)

result = reduce(lambda num1, num2: num1 + num2, numbers)

print(result)

# ((((1 + 8) + 2) + 9) + 100)
```
Output:
```
120
```
---
# 🔵 خلاصة reduce()

- تُستخدم لو تريد "دمج" العناصر في **نتيجة واحدة**
    
- مثل: الجمع، الضرب، إيجاد الأكبر، الأصغر...
    
- تحتاج دائماً دالة ذات معاملين.
    
- يجب استدعاؤها من مكتبة functools.