#include <iostream>
#include <string>
/**/#include <fstream>
/**/#include <sstream>

using namespace std;

/**/ifstream veskinput;
/**/ofstream veskoutput;

string s;
string ans;
bool even;

void addOne();
void makePalindrome();
/**/string veskaddZeros(int veskx, int veskn);

int main()
{
    /**/int vesknumberOfTests;
    /**/cin >> vesknumberOfTests;
    /**/for(int veski = 0;veski < vesknumberOfTests; ++veski){
    /**/
    cin >> s;
    ans = s;
    makePalindrome();
    if(ans <= s)
    {
        addOne();
        makePalindrome();
    }

    cout << ans << endl;

    return 0;
}

///makePalindrome()
void makePalindrome()
{
    for(int i = 0;i < ans.size() / 2; ++i)
        ans[ans.size() - i - 1] = ans[i];
}

///addOne()
void addOne()
{
    int i = (ans.size() + 1) / 2 - 1;///if the size is even adding one wouldn't change the result but if it is odd it will add one
    while(i >= 0)
    {
        if(ans[i] == '9')///then we will have to continue adding
        {
            ans[i] = '0';///we set the digit to 0
            i--;///d/**/ecrease i to continue with the other digits
        }
        else///then we just have to add 1
        {
            ++ans[i];///add one to the digit
            return;///we don't have to continue because we add just one to the number
        }
    }
}

/**////addZeros(int x, int n)
/**/string veskaddZeros(int veskx, int veskn)
/**/{
/**/    stringstream veskss;
/**/    veskss << veskn;
/**/    string veskans = veskss.str();
/**/    while(veskans.size() < veskx)
/**/    {
/**/        veskans = '0' + veskans;
/**/    }
/**/    return veskans;
/**/}
/**/
/**/
