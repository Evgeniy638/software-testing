note
	description: "Summary description for {PHONE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PHONE

inherit
	SLEEP -- for wait

create
	make

	feature {NONE} -- Initialization

		make (a_gangster: like gangster; a_message: INTEGER; a_sleep_time: INTEGER)
			do
				message := a_message
				gangster := a_gangster
				sleep_time := a_sleep_time
			end


	feature -- Access
		message:INTEGER
		sleep_time: INTEGER
		gangster: separate GANGSTER -- called by run on each position change

	feature -- Access
		start_infinite_loop
			local
        		i:INTEGER
			do
				from
    				i := 0
				until
					false
				loop
					i := i + 1
				    run
				end
			end

	feature
		run
			do
				wait (sleep_time)
				make_talk (gangster, message)
				wait (sleep_time * 10)
			end

		make_talk (gang: separate GANGSTER; mes: INTEGER)
		require
			not gang.busy
		do
			gang.start_conversation (mes)
			wait (sleep_time * 100)
			gang.stop_conversation
		ensure
			not gang.busy
		end

end
