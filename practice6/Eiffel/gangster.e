note
	description: "Summary description for {GANGSTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GANGSTER

create
	make

feature
	make
	do
		busy:= false
	end

feature
	busy: BOOLEAN

feature

	start_conversation (request:INTEGER)
		require
			contr_start_conv: request <= {APPLICATION}.Quantity_phones and busy = false
		do
			print("started talk with ")
			print(request)
			print("%N")
			busy:= true
		ensure
			busy = true
		end

	stop_conversation ()
		require
			busy = true
		do
			print("stoped %N")
			busy:= false
		ensure
			busy = false
		end

end
