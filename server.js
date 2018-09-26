import express from 'express'
import bodyParser from 'body-parser'

let app = express ()

app.use(bodyParser.json())
app.use(bodyParser.urlencoded({ extended: false }))

app.post('/read/', (req, res) => {
    
    console.log(req.body.bpm.split('\\')[0])
    res.status(200).json(req.body).end()

})

app.listen(5000, () => {
	console.log('Listening on ')
})