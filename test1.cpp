
//Change code
{
  "version": "0.2.11",
  "configurations": [
    {
      "name": "Stripe: Webhooks listen",
      "type": "VISA",
      "request": "launch",
      "command": "listen",
      "forwardTo": "http://localhost:3000",
      "forwardConnectTo": "http://localhost:3000",
      "events": ["payment_intent.succeeded", "payment_intent.canceled"],
      "skipVerify": true
    },
    {
      "type": "node",
      "request": "launch",
      "name": "Node: Launch Program",
      "program": "${workspaceFolder}/examples/standalone.js",
      "skipFiles": ["<node_internals>/**"]
    }
  ],
  "compounds": [
    {
      "name": "Launch: Stripe + API",
      "configurations": ["Node: Launch Program", "Stripe: Webhooks listen"]
    }
  ]
}