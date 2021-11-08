note
	description: "project application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make

	feature
		Quantity_phones: INTEGER = 10
		Max_sleep_time: INTEGER = 100
		gangster: GANGSTER
		phones: LINKED_LIST[separate PHONE]

		random: RANDOM

	feature {NONE} -- Initialization

		make
			do
				init
				run
			end

		init
			local
				sleep_time: INTEGER
				i: INTEGER
				phone_sep: like phones.item
			do
				create gangster.make
				create phones.make
				set_random
				from
					i := 1
				until
					Quantity_phones < i
				loop
					i:= i + 1
					sleep_time:= random.item \\ Max_sleep_time + 1
					create phone_sep.make (gangster, i, sleep_time)
					phones.extend (phone_sep)

					random.forth
				end
			end

	feature
		run
			local
				i: INTEGER
			do
				from
					i := 1
				until
					Quantity_phones < i
				loop
					start_phone(phones[i])
					i:= i + 1
				end
		end

		start_phone (phone: separate PHONE)
			do
				phone.start_infinite_loop
			end

		set_random
				-- setting of random object
			local
				l_time: TIME
			do
				create l_time.make_now
				create random.make
				random.set_seed (l_time.milli_second  \\ 100)
				random.forth
			end
end
