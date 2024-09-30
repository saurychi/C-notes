        while(ht->elems[i] != NULL){
            i++;
        }
        ht->elems[i] = p;
        (ht->count)++;