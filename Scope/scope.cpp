/*

Hva er i "scope" - altså synlig? 

1. Det som er definert i .h/.hpp filer og inkludert med include
2. Det som blir definert direkte i filen
3. Det som er definert i parameterlisten
4. (medlemsvariabler) - vi kommer til dette etterhvert

*/


int b = 3;

int main() {
	int c = 4;
	{
		int d = 5;
		{
			int e = 6;

			// Her er b, c, d, e synlig
		}
		// Her er b, c, d synlig		
	}
	// Her er b, c
}
// Her er b synlig
