#include "benchmark.hpp"

long int filesize[N] = {10485760, 104857600, 1073741824, 10737418240};
long int blocksize[N] = {1024, 10240, 102400, 1048576};

//long int filesize[N] = {10000000, 100000000, 1000000000, 10000000000};
//long int blocksize[N] = {1000, 10000, 100000, 1000000};

int main() {
	long int numInteraction = 0;
	unsigned int ex = 0, rep = 0;

//	for(int i=N-1;i>=0;--i) {
//		for(int j=N-1;j>=0;--j) {
	for(int i=0;i<N;i++) {
		for(int j=N-1;j>=0;j--) {
			numInteraction = filesize[i]/blocksize[j];
			cout << "RESULTS OF EXPERIMENT NUMBER: " << ++ex << endl;
			cout << "FILESIZE: " << filesize[i] << " BLOCKSIZE: " << blocksize[j] << " NUMINTERACTION: " << numInteraction << endl;			
			for(int k=NUM_ESPERIMENTI;k>0;--k) {
				cout << rep++%30 << ";";
				analysisWrite(blocksize[j], numInteraction);
				//checkFileSize(filesize[i]);
				analysisRead(blocksize[j], numInteraction);
			}
		}
	}
	return 0;
}
