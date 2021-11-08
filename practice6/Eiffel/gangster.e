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
		do
			print("started talk with ")
			print(request)
			print("%N")
			busy:= true
		end

	stop_conversation ()
		do
			print("stoped %N")
			busy:= false
		end

end
