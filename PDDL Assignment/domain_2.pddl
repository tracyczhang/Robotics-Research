(define (domain move-robot-2)
	(:requirements :typing)
	(:types robot cell)
	(:predicates
		(is-blocked ?x - cell)
		(robot-in-cell ?r - robot ?x - cell)
		(is-adjacent ?x - cell ?y - cell)
	)
	(:action move
		:parameters (?r - robot ?x - cell ?y - cell)
		:precondition (and
			(robot-in-cell ?r ?x)
			(is-adjacent ?x ?y)
			(not (is-blocked ?y))
		)
		:effect (and
			(robot-in-cell ?r ?y)
			(not (robot-in-cell ?r ?x))
		)
	)
)
