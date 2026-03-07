```
ادا الكود صعب عليك تفهمو طبق هده الاشياء:

1- يجب ان تفهم كيف يبنى هدا المنطق

يبنى بهده الطريقة:

إذا السنة متساوية
    إذا الشهر متساوي
        إذا اليوم متساوي
            أرجع true
        وإلا false
    وإلا false
وإلا false


2- .كي تسهل عليك short hand if العادية ثم بعدها اعادة كتابتها ب if statment بعد فهمك لكيف يبنى هدا المنطق عليك اولا كتابة الكود ب

مثلا بهده الطريقة:

if (Year equal)
{
    if (Month equal)
    {
        if (Day equal)
            return true;
        else
            return false;
    }
    else
        return false;
}
else
    return false;
    
    
3- short hand if نحول الكود السابق الى

ولكي لا تخطئ فهده هي الخطوات او شجرة الكود

YearEqual ?
│
├─ ( MonthEqual ?
│      ├─ ( DayEqual ?
│      │       ├─ true
│      │       └─ false
│      │    )
│      └─ false
│   )
└─ false 

يعني هكدا:

return (YearEqual)
    ? ( (MonthEqual)
        ? ( (DayEqual) ? true : false )
        : false )
    : false;
    
لان منطق الكود يختلف قليلا وبالتوفيق للجميع short hand if وهده الامثلة هي فقط لهدا التمرين ولا ينطبق على كل تمارين  
ChatGpt وبالنسبة لشرحي فهو خلاصة كلامي مع

```