string pigLatin(string word)
{
    string s = "way";
    if (word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i')
    {
        word.insert(word.size(), s);
    }
    else {
        char a = word[0];
    string b = "ay";
    for ( int i = 1; i < word.size(); i++ )
    {
        word[i - 1] = word[i];
    }
        word[word.size() - 1] = a;
        word.insert(word.size(), b);
    }
    return word;
}