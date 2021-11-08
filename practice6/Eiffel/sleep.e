note
	description: "Summary description for {SLEEP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SLEEP

feature {ANY} -- Basic operations

	wait (a_ms: INTEGER_64)
			-- Delay execution by `milliseconds'.
		do
			(create {EXECUTION_ENVIRONMENT}).sleep (a_ms * 1_000_000)
		end

end
