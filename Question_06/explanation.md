I used tr to convert spaces into newlines so that each word is on its own line. I then used sort and uniq -c to count occurrences, and a final sort -nr to display the most frequent words at the top.
