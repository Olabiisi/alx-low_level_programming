if (c >= 'A' && c <= 'Z')
return 1;
return 0;
}
