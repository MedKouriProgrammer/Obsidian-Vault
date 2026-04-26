---
creation_date: 2026-04-23
tags:
  - Resources/Articles
Author: "[[abu-hedhoud]]"
---
> [!summary]-
> 

# <font color="#646a73">Utility Library: Requirements.</font> 
---
### <font color="#ffff00">Input: Main.cpp</font>
```cpp
int main() {

    clsUtil::Srand();
    cout << clsUtil::ReadRandomNumber(1, 10) << endl;
    cout << clsUtil::enCharType(clsUtil::enCharType::CapitalLetter) << endl;
    cout << clsUtil::GenerateWord(clsUtil::MixChar, 8) << endl;
    cout << clsUtil::GenerateKey(clsUtil::MixChar) << endl;
    clsUtil::GenerateKeys(10, clsUtil::MixChar);
    
    cout << endl;
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    clsUtil::Swap_Number(x, y);
    cout << x << " " << y << endl;

    cout << endl;
    double d1 = 10.5, d2 = 20.5;
    cout << d1 << " " << d2 << endl;
    clsUtil::Swap_Double(d1, d2);
    cout << d1 << " " << d2 << endl;

    cout << endl;
    string S1 = "Ali", S2 = "Ahmed";
    cout << S1 << " " << S2 << endl;
    clsUtil::Swap_String(S1, S2);
    cout << S1 << " " << S2 << endl;

    cout << endl;
    clsDate D1(1, 10, 2022), D2(1, 1, 2022);
    cout << clsDate::DateToString(D1) << " " << clsDate::DateToString(D2) << endl;
    clsUtil::SwapDates(D1, D2);
    cout << clsDate::DateToString(D1) << " " << clsDate::DateToString(D2) << endl;

    cout << endl;
    int Arr[5] = {1, 2, 3, 4, 5};
    clsUtil::ShuffleArray(Arr, 5);
    cout << "Array After Shuffle:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr[i] << endl;
    }

	cout << endl;
    string Arr2[5] = {"Ali", "Fadi", "Ahmed", "Quasim", "Khalid"};
    clsUtil::ShuffleArray(Arr2, 5);
    cout << "Array After Shuffle:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr2[i] << endl;
    }

	cout << endl;
    int Arr3[5];
    clsUtil::FillArrayWithRandomNumber(Arr3, 5, 20, 50);
    cout << "Array After Fill:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr3[i] << endl;
    }

	cout << endl;
    string Arr4[5];
    clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChar, 8);
    cout << "Array After Fill:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr4[i] << endl;
    }

	cout << endl;
    string Arr5[5];
    clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChar);
    cout << "Array After Fillying Keys:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Arr5[i] << endl;
    }
	
	cout << "\nText1" << clsUtil::GetTabs(5) << "Text2" << endl;

	const short EncryptionKey = 2;

	string TextAfterEncryption, TextAfterDecryption;
	string Text = "Mohemmed Abu-Hedhoud";
	TextAfterEncryption = clsUtil::ReverseNametoCode(Text, EncryptionKey);
	TextAfterDecryption = clsUtil::ReturnCodetoName(TextAfterEncryption, EncryptionKey);

	cout << "Text Before Encryption: " << TextAfterDecryption << "\n";
	cout << "Text After Encryption: " << TextAfterEncryption << "\n";
	cout << "Text After Decryption: " << TextAfterDecryption << endl;


    return 0;
}
```
### Input: clsUtil.h
```cpp
class clsUtil {

    public:

    static void Srand() {
        srand((unsigned)time(NULL));
    }

    static int ReadRandomNumber(int from, int to) {

        int RandNamer = rand() % (to - from + 1) + from;

        return RandNamer;
    }

    enum enCharType {

        SmallLetter = 1,
        CapitalLetter = 2,
        SpecialCharacter = 3,
        Digit = 4,
        MixChar = 5
    };

    static char GetRandomCharacter(enCharType chartype)
{
    if (chartype == MixChar)
    {
        int r = ReadRandomNumber(1, 3);

        switch (r)
        {
        case 1: chartype = SmallLetter; break;
        case 2: chartype = CapitalLetter; break;
        case 3: chartype = Digit; break;
        }
    }

    switch (chartype)
    {
    case SmallLetter:
        return char(ReadRandomNumber(97, 122));

    case CapitalLetter:
        return char(ReadRandomNumber(65, 90));

    case Digit:
        return char(ReadRandomNumber(48, 57));

    case SpecialCharacter:
        return char(ReadRandomNumber(33, 47));

    default:
        return char(ReadRandomNumber(65, 90));
    }
}
    static string GenerateWord(enCharType chartype, short length) {

        string word;

        for (int i = 1;i <= length;i++) 
        {
            word = word + GetRandomCharacter(chartype);
        }
        return word;
    }

    static string GenerateKey(enCharType CharType) {

        string key = "";

        key = GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4);

        return key;
    }
    static void GenerateKeys(short NumberOfKey, enCharType CharType) {

        cout << "\n";

        for (int i = 1; i <= NumberOfKey; i++)
        {
            cout << "Key [" << i << "]:";
            cout << GenerateKey(CharType) << endl;
        }

    }

    static void Swap_Number(int &num1,int &num2) {

        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    static void Swap_Double(double &D1, double &D2) {

        double temp = D1;
        D1 = D2;
        D2 = temp;
    }

    static void Swap_String(string &S1,string &S2) {

        string temp = S1;
        S1 = S2;
        S2 = temp;
    }

    static void SwapDates(clsDate & Date1, clsDate & Date2){

		clsDate TempDate;
		TempDate = Date1;
		Date1 = Date2;
		Date2 = TempDate;

	}

    static void ShuffleArray(int arr1[100], int arrLength) {

        for (int i = 0; i < arrLength; i++)
        {
            Swap_Number(arr1[ReadRandomNumber(1, arrLength) - 1], arr1[ReadRandomNumber(1, arrLength) - 1]);
        }
    }

	static void ShuffleArray(string arr2[100], int arrLength) {

        for (int i = 0; i < arrLength; i++)
        {
            Swap_String(arr2[ReadRandomNumber(1, arrLength) - 1], arr2[ReadRandomNumber(1, arrLength) - 1]);
        }
    }

	static void FillArrayWithRandomNumber(int arr3[100], int arrLenght, short From, short To) {

		for (int i = 0; i < arrLenght; i++)
		{	
			arr3[i] = ReadRandomNumber(From, To);
		}

	}

	static void FillArrayWithRandomWords(string arr4[100], int arrLenght,enCharType CharType, short To) {

		for (int i = 0; i < arrLenght; i++)
		{	
			arr4[i] = GenerateWord(CharType, To);
		} 

	}

	static void FillArrayWithRandomKeys(string arr5[100], int arrLenght,enCharType CharType) {

		for (int i = 0; i < arrLenght; i++)
		{	
			arr5[i] = GenerateKey(CharType);
		}

	}

	static string GetTabs(short Number0fTabs) {

		string t = "";

		for (int i = 1; i <= Number0fTabs; i++)
		{
			t = t + "\t";
			
		}

		return t;
	}

	static string ReverseNametoCode(string name, int EncryptionKey) {

		cout << "\n";

		for (int i = 0;i <= name.length();i++)
		{
			name[i] = char((int)name[i] + EncryptionKey);
		}

		return name;
	}
	static string ReturnCodetoName(string name, int EncryptionKey) {

		cout << "\n";

		for (int i = 0;i <= name.length(); i++)
		{
			name[i] = char((int)name[i] - EncryptionKey);
		}

		return name;
	}


};

```