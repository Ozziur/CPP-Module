#!/bin/bash

# Inizializza un array vuoto
numbers=()

# Genera 3000 numeri casuali tra 1 e 10000 e li aggiunge all'array
for i in {1..3000}
do
  numbers+=($((RANDOM % 10000 + 1)))
done

# Ordina casualmente l'array
for i in $(seq 0 $((${#numbers[@]} - 1)))
do
  # Genera un indice casuale nell'intervallo degli indici dell'array
  random_index=$((RANDOM % (${#numbers[@]} - i) + i))
  
  # Scambia il valore dell'elemento corrente con quello dell'elemento casuale
  temp=${numbers[i]}
  numbers[i]=${numbers[random_index]}
  numbers[random_index]=$temp
done

# Stampa i numeri casuali disordinati
echo "${numbers[@]}"
