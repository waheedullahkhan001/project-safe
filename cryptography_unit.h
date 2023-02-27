
string processText(string input, string secret)
{
    int    key    = 0;
    string result = "";

    for (int i = 0; i < secret.length(); i++)
    {
        key += (int) secret[i];
    }
    
    for (int i = 0; i < input.length(); i++)
    {
        result += (char) ( (int) input[i] ^ key);
    }

    return result;
}
