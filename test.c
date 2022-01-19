bool fileExists(const char* filename)
{
    FILE* fp = fopen(filename, "r");
    bool result = (fp != NULL);
    return result;
}
