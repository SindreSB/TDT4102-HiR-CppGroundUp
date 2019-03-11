/*

Hva er i "scope" - altså synlig? 

1. Det som er definert i .h/.hpp filer og inkludert med include
2. Det som blir definert direkte i filen
3. Det som er definert i parameterlisten
4. (medlemsvariabler) - vi kommer til dette etterhvert

*/

// scope.h inneholder en definisjon av a = 3
// (don't do this at home)
#include "scope.h"

int b = 3;

int main() {
	int c = 4;
	{
		int d = 5;
		{
			int e = 6;

			// Her er a, b, c, d, e synlig
		}
		// Her er a, b, c, d synlig		
	}
	// Her er a, b, c
}
// Her er a og b synlig
