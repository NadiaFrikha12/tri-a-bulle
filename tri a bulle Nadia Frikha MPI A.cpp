void TriBulle (int T[], int taille){
	for(int i=0; i<taille-1; i++){
		for(int j=0; j<taille-i-1; j++){
			if (T[j]>T[j+1]){
				int tmp = T[j];
				T[j]=T[j+1];
				T[j+1]=tmp;
			}
		}
	}
}
