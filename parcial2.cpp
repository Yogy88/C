// struct renglonfactura () { //como pense el array
renglonfactura
		char numero
		char codigo
		char descripcion
		int cantidad pedida
		int precio unitario	
		 factura   {
	
			char articulos [15]
			char fecha
			int cuil
			}

		
		// struct renglonfactura //como debe quedar el array

		 factura   {
	
			char articulos [15]
			char fecha
			int cuil
			
				renglonfactura {
				char numero
				char codigo
				char descripcion
				int cantidad pedida
				int precio unitario	
				precio de renglon
				}
			
			precio total
		}

			// struct renglonfactura //como debe quedar el array2

		 factura   {
	

			char fecha
			int cuil
			char numero de factura (lo reemplazo por numero)
			
				renglonfactura {

				char articulos [15] <--
				char codigo
				char descripcion
				int cantidad pedida
				int precio unitario	
				calculo de precio de renglon sin variable
				}
			
			precio total
		}
